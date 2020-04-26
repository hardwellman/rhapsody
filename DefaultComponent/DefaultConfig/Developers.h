/*********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Developers
//!	Generated Date	: Thu, 20, Feb 2020  
	File Path	: DefaultComponent\DefaultConfig\Developers.h
*********************************************************************/

#ifndef Developers_H
#define Developers_H

//## auto_generated
#include <oxf\oxf.h>
//## actor Developers
#include "Manager.h"
//## package Default

//## actor Developers
class Developers : public Manager {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Developers();
    
    //## auto_generated
    ~Developers();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Manager* getItsManager_1() const;
    
    //## auto_generated
    void setItsManager_1(Manager* p_Manager);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Manager* itsManager_1;		//## link itsManager_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsManager_1(Manager* p_Manager);
    
    //## auto_generated
    void _setItsManager_1(Manager* p_Manager);
    
    //## auto_generated
    void _clearItsManager_1();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Developers.h
*********************************************************************/
