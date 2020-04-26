/********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonChangeCl
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonChangeCl.cpp
*********************************************************************/

//## auto_generated
#include "ButtonChangeCl.h"
//## link itsForm1Main
#include "Form1Main.h"
//## package Default

//## class ButtonChangeCl
ButtonChangeCl::ButtonChangeCl() {
    itsForm1Main = NULL;
}

ButtonChangeCl::~ButtonChangeCl() {
    cleanUpRelations();
}

void ButtonChangeCl::Open() {
    //#[ operation Open()
    //#]
}

int ButtonChangeCl::getChangeClient() const {
    return ChangeClient;
}

void ButtonChangeCl::setChangeClient(int p_ChangeClient) {
    ChangeClient = p_ChangeClient;
}

Form1Main* ButtonChangeCl::getItsForm1Main() const {
    return itsForm1Main;
}

void ButtonChangeCl::setItsForm1Main(Form1Main* p_Form1Main) {
    if(p_Form1Main != NULL)
        {
            p_Form1Main->_setItsButtonChangeCl(this);
        }
    _setItsForm1Main(p_Form1Main);
}

void ButtonChangeCl::cleanUpRelations() {
    if(itsForm1Main != NULL)
        {
            ButtonChangeCl* p_ButtonChangeCl = itsForm1Main->getItsButtonChangeCl();
            if(p_ButtonChangeCl != NULL)
                {
                    itsForm1Main->__setItsButtonChangeCl(NULL);
                }
            itsForm1Main = NULL;
        }
}

void ButtonChangeCl::__setItsForm1Main(Form1Main* p_Form1Main) {
    itsForm1Main = p_Form1Main;
}

void ButtonChangeCl::_setItsForm1Main(Form1Main* p_Form1Main) {
    if(itsForm1Main != NULL)
        {
            itsForm1Main->__setItsButtonChangeCl(NULL);
        }
    __setItsForm1Main(p_Form1Main);
}

void ButtonChangeCl::_clearItsForm1Main() {
    itsForm1Main = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonChangeCl.cpp
*********************************************************************/
