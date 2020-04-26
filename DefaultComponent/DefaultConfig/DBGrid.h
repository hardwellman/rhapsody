/*********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DBGrid
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\DBGrid.h
*********************************************************************/

#ifndef DBGrid_H
#define DBGrid_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsButtonAdd
class ButtonAdd;

//## link itsButtonEdit
class ButtonEdit;

//## link itsForm1Main
class Form1Main;

//## package Default

//## class DBGrid
class DBGrid {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DBGrid();
    
    //## auto_generated
    ~DBGrid();
    
    ////    Operations    ////
    
    //## operation Show()
    void Show();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getFIO() const;
    
    //## auto_generated
    void setFIO(int p_FIO);
    
    //## auto_generated
    int getMaleFemale() const;
    
    //## auto_generated
    void setMaleFemale(int p_MaleFemale);
    
    //## auto_generated
    int getNumber() const;
    
    //## auto_generated
    void setNumber(int p_Number);
    
    //## auto_generated
    int getPhoneNumber() const;
    
    //## auto_generated
    void setPhoneNumber(int p_PhoneNumber);
    
    //## auto_generated
    ButtonAdd* getItsButtonAdd() const;
    
    //## auto_generated
    void setItsButtonAdd(ButtonAdd* p_ButtonAdd);
    
    //## auto_generated
    ButtonEdit* getItsButtonEdit() const;
    
    //## auto_generated
    void setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    Form1Main* getItsForm1Main() const;
    
    //## auto_generated
    void setItsForm1Main(Form1Main* p_Form1Main);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int FIO;		//## attribute FIO
    
    int MaleFemale;		//## attribute MaleFemale
    
    int Number;		//## attribute Number
    
    int PhoneNumber;		//## attribute PhoneNumber
    
    ////    Relations and components    ////
    
    ButtonAdd* itsButtonAdd;		//## link itsButtonAdd
    
    ButtonEdit* itsButtonEdit;		//## link itsButtonEdit
    
    Form1Main* itsForm1Main;		//## link itsForm1Main
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsButtonAdd(ButtonAdd* p_ButtonAdd);
    
    //## auto_generated
    void _setItsButtonAdd(ButtonAdd* p_ButtonAdd);
    
    //## auto_generated
    void _clearItsButtonAdd();
    
    //## auto_generated
    void __setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    void _setItsButtonEdit(ButtonEdit* p_ButtonEdit);
    
    //## auto_generated
    void _clearItsButtonEdit();
    
    //## auto_generated
    void __setItsForm1Main(Form1Main* p_Form1Main);
    
    //## auto_generated
    void _setItsForm1Main(Form1Main* p_Form1Main);
    
    //## auto_generated
    void _clearItsForm1Main();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DBGrid.h
*********************************************************************/
