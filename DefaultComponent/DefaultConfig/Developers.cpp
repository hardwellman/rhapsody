/********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Developers
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: DefaultComponent\DefaultConfig\Developers.cpp
*********************************************************************/

//## auto_generated
#include "Developers.h"
//## package Default

//## actor Developers
Developers::Developers() {
    itsManager_1 = NULL;
}

Developers::~Developers() {
    cleanUpRelations();
}

Manager* Developers::getItsManager_1() const {
    return itsManager_1;
}

void Developers::setItsManager_1(Manager* p_Manager) {
    if(p_Manager != NULL)
        {
            p_Manager->_setItsDevelopers(this);
        }
    _setItsManager_1(p_Manager);
}

void Developers::cleanUpRelations() {
    if(itsManager_1 != NULL)
        {
            Developers* p_Developers = itsManager_1->getItsDevelopers();
            if(p_Developers != NULL)
                {
                    itsManager_1->__setItsDevelopers(NULL);
                }
            itsManager_1 = NULL;
        }
}

void Developers::__setItsManager_1(Manager* p_Manager) {
    itsManager_1 = p_Manager;
}

void Developers::_setItsManager_1(Manager* p_Manager) {
    if(itsManager_1 != NULL)
        {
            itsManager_1->__setItsDevelopers(NULL);
        }
    __setItsManager_1(p_Manager);
}

void Developers::_clearItsManager_1() {
    itsManager_1 = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Developers.cpp
*********************************************************************/
