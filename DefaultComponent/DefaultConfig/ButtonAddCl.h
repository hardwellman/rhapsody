/*********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonAddCl
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonAddCl.h
*********************************************************************/

#ifndef ButtonAddCl_H
#define ButtonAddCl_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsForm1Main
class Form1Main;

//## package Default

//## class ButtonAddCl
class ButtonAddCl {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ButtonAddCl();
    
    //## auto_generated
    ~ButtonAddCl();
    
    ////    Operations    ////
    
    //## operation Open()
    void Open();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAddClient() const;
    
    //## auto_generated
    void setAddClient(int p_AddClient);
    
    //## auto_generated
    Form1Main* getItsForm1Main() const;
    
    //## auto_generated
    void setItsForm1Main(Form1Main* p_Form1Main);
    
    //## auto_generated
    Form1Main* getItsForm1Main_1() const;
    
    //## auto_generated
    void setItsForm1Main_1(Form1Main* p_Form1Main);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int AddClient;		//## attribute AddClient
    
    ////    Relations and components    ////
    
    Form1Main* itsForm1Main;		//## link itsForm1Main
    
    Form1Main* itsForm1Main_1;		//## link itsForm1Main_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsForm1Main(Form1Main* p_Form1Main);
    
    //## auto_generated
    void _setItsForm1Main(Form1Main* p_Form1Main);
    
    //## auto_generated
    void _clearItsForm1Main();
    
    //## auto_generated
    void __setItsForm1Main_1(Form1Main* p_Form1Main);
    
    //## auto_generated
    void _setItsForm1Main_1(Form1Main* p_Form1Main);
    
    //## auto_generated
    void _clearItsForm1Main_1();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonAddCl.h
*********************************************************************/
