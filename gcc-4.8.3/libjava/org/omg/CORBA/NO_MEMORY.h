
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_NO_MEMORY__
#define __org_omg_CORBA_NO_MEMORY__

#pragma interface

#include <org/omg/CORBA/SystemException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class CompletionStatus;
          class NO_MEMORY;
      }
    }
  }
}

class org::omg::CORBA::NO_MEMORY : public ::org::omg::CORBA::SystemException
{

public:
  NO_MEMORY(::java::lang::String *);
  NO_MEMORY();
  NO_MEMORY(jint, ::org::omg::CORBA::CompletionStatus *);
  NO_MEMORY(::java::lang::String *, jint, ::org::omg::CORBA::CompletionStatus *);
private:
  static const jlong serialVersionUID = -4591569617929689285LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_NO_MEMORY__
