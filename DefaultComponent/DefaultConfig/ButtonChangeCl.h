/*********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonChangeCl
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonChangeCl.h
*********************************************************************/

#ifndef ButtonChangeCl_H
#define ButtonChangeCl_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsForm1Main
class Form1Main;

//## package Default

//## class ButtonChangeCl
class ButtonChangeCl {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ButtonChangeCl();
    
    //## auto_generated
    ~ButtonChangeCl();
    
    ////    Operations    ////
    
    //## operation Open()
    void Open();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getChangeClient() const;
    
    //## auto_generated
    void setChangeClient(int p_ChangeClient);
    
    //## auto_generated
    Form1Main* getItsForm1Main() const;
    
    //## auto_generated
    void setItsForm1Main(Form1Main* p_Form1Main);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int ChangeClient;		//## attribute ChangeClient
    
    ////    Relations and components    ////
    
    Form1Main* itsForm1Main;		//## link itsForm1Main
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsForm1Main(Form1Main* p_Form1Main);
    
    //## auto_generated
    void _setItsForm1Main(Form1Main* p_Form1Main);
    
    //## auto_generated
    void _clearItsForm1Main();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonChangeCl.h
*********************************************************************/
