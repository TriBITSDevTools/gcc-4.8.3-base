
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CORBA_ParameterMode__
#define __org_omg_CORBA_ParameterMode__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class ParameterMode;
      }
    }
  }
}

class org::omg::CORBA::ParameterMode : public ::java::lang::Object
{

public: // actually protected
  ParameterMode(jint);
public:
  virtual jint value();
  static ::org::omg::CORBA::ParameterMode * from_int(jint);
private:
  static const jlong serialVersionUID = 1521598391932998229LL;
public:
  static const jint _PARAM_IN = 0;
  static const jint _PARAM_OUT = 1;
  static const jint _PARAM_INOUT = 2;
  static ::org::omg::CORBA::ParameterMode * PARAM_IN;
  static ::org::omg::CORBA::ParameterMode * PARAM_OUT;
  static ::org::omg::CORBA::ParameterMode * PARAM_INOUT;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) value__;
  static JArray< ::org::omg::CORBA::ParameterMode * > * table;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CORBA_ParameterMode__