/********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DBGrid
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\DBGrid.cpp
*********************************************************************/

//## auto_generated
#include "DBGrid.h"
//## link itsButtonAdd
#include "ButtonAdd.h"
//## link itsButtonEdit
#include "ButtonEdit.h"
//## link itsForm1Main
#include "Form1Main.h"
//## package Default

//## class DBGrid
DBGrid::DBGrid() {
    itsButtonAdd = NULL;
    itsButtonEdit = NULL;
    itsForm1Main = NULL;
}

DBGrid::~DBGrid() {
    cleanUpRelations();
}

void DBGrid::Show() {
    //#[ operation Show()
    //#]
}

int DBGrid::getFIO() const {
    return FIO;
}

void DBGrid::setFIO(int p_FIO) {
    FIO = p_FIO;
}

int DBGrid::getMaleFemale() const {
    return MaleFemale;
}

void DBGrid::setMaleFemale(int p_MaleFemale) {
    MaleFemale = p_MaleFemale;
}

int DBGrid::getNumber() const {
    return Number;
}

void DBGrid::setNumber(int p_Number) {
    Number = p_Number;
}

int DBGrid::getPhoneNumber() const {
    return PhoneNumber;
}

void DBGrid::setPhoneNumber(int p_PhoneNumber) {
    PhoneNumber = p_PhoneNumber;
}

ButtonAdd* DBGrid::getItsButtonAdd() const {
    return itsButtonAdd;
}

void DBGrid::setItsButtonAdd(ButtonAdd* p_ButtonAdd) {
    if(p_ButtonAdd != NULL)
        {
            p_ButtonAdd->_setItsDBGrid(this);
        }
    _setItsButtonAdd(p_ButtonAdd);
}

ButtonEdit* DBGrid::getItsButtonEdit() const {
    return itsButtonEdit;
}

void DBGrid::setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    if(p_ButtonEdit != NULL)
        {
            p_ButtonEdit->_setItsDBGrid(this);
        }
    _setItsButtonEdit(p_ButtonEdit);
}

Form1Main* DBGrid::getItsForm1Main() const {
    return itsForm1Main;
}

void DBGrid::setItsForm1Main(Form1Main* p_Form1Main) {
    if(p_Form1Main != NULL)
        {
            p_Form1Main->_setItsDBGrid(this);
        }
    _setItsForm1Main(p_Form1Main);
}

void DBGrid::cleanUpRelations() {
    if(itsButtonAdd != NULL)
        {
            DBGrid* p_DBGrid = itsButtonAdd->getItsDBGrid();
            if(p_DBGrid != NULL)
                {
                    itsButtonAdd->__setItsDBGrid(NULL);
                }
            itsButtonAdd = NULL;
        }
    if(itsButtonEdit != NULL)
        {
            DBGrid* p_DBGrid = itsButtonEdit->getItsDBGrid();
            if(p_DBGrid != NULL)
                {
                    itsButtonEdit->__setItsDBGrid(NULL);
                }
            itsButtonEdit = NULL;
        }
    if(itsForm1Main != NULL)
        {
            DBGrid* p_DBGrid = itsForm1Main->getItsDBGrid();
            if(p_DBGrid != NULL)
                {
                    itsForm1Main->__setItsDBGrid(NULL);
                }
            itsForm1Main = NULL;
        }
}

void DBGrid::__setItsButtonAdd(ButtonAdd* p_ButtonAdd) {
    itsButtonAdd = p_ButtonAdd;
}

void DBGrid::_setItsButtonAdd(ButtonAdd* p_ButtonAdd) {
    if(itsButtonAdd != NULL)
        {
            itsButtonAdd->__setItsDBGrid(NULL);
        }
    __setItsButtonAdd(p_ButtonAdd);
}

void DBGrid::_clearItsButtonAdd() {
    itsButtonAdd = NULL;
}

void DBGrid::__setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    itsButtonEdit = p_ButtonEdit;
}

void DBGrid::_setItsButtonEdit(ButtonEdit* p_ButtonEdit) {
    if(itsButtonEdit != NULL)
        {
            itsButtonEdit->__setItsDBGrid(NULL);
        }
    __setItsButtonEdit(p_ButtonEdit);
}

void DBGrid::_clearItsButtonEdit() {
    itsButtonEdit = NULL;
}

void DBGrid::__setItsForm1Main(Form1Main* p_Form1Main) {
    itsForm1Main = p_Form1Main;
}

void DBGrid::_setItsForm1Main(Form1Main* p_Form1Main) {
    if(itsForm1Main != NULL)
        {
            itsForm1Main->__setItsDBGrid(NULL);
        }
    __setItsForm1Main(p_Form1Main);
}

void DBGrid::_clearItsForm1Main() {
    itsForm1Main = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DBGrid.cpp
*********************************************************************/
