
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_swing_SwingCheckboxPeer$SwingCheckboxListener__
#define __gnu_java_awt_peer_swing_SwingCheckboxPeer$SwingCheckboxListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace swing
          {
              class SwingCheckboxPeer;
              class SwingCheckboxPeer$SwingCheckboxListener;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Checkbox;
      namespace event
      {
          class ItemEvent;
      }
    }
  }
}

class gnu::java::awt::peer::swing::SwingCheckboxPeer$SwingCheckboxListener : public ::java::lang::Object
{

public: // actually package-private
  SwingCheckboxPeer$SwingCheckboxListener(::gnu::java::awt::peer::swing::SwingCheckboxPeer *, ::java::awt::Checkbox *);
public:
  virtual void itemStateChanged(::java::awt::event::ItemEvent *);
public: // actually package-private
  ::java::awt::Checkbox * __attribute__((aligned(__alignof__( ::java::lang::Object)))) awtCheckbox;
  ::gnu::java::awt::peer::swing::SwingCheckboxPeer * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_swing_SwingCheckboxPeer$SwingCheckboxListener__
