
#ifndef MODULES_H
#define MODULES_H
#include"general_includes.hpp"
#include"motor.hpp"
#include"light.hpp"
#include"tens.hpp"
#include"vibration.hpp"

/**
  * class modules
  * 
  */

class modules
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  modules();

  /**
   * Empty Destructor
   */
protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  

  motor* new_attribute;
  light* new_attribute_1;
  tens* new_attribute_2;
  vibration* new_attribute_3;

  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  /**
   * Set the value of new_attribute
   * @param value the new value of new_attribute
   */
  void setNew_attribute(motor* value)
  {
    new_attribute = value;
  }

  /**
   * Get the value of new_attribute
   * @return the value of new_attribute
   */
  motor* getNew_attribute()
  {
    return new_attribute;
  }

  /**
   * Set the value of new_attribute_1
   * @param value the new value of new_attribute_1
   */
  void setNew_attribute_1(light* value)
  {
    new_attribute_1 = value;
  }

  /**
   * Get the value of new_attribute_1
   * @return the value of new_attribute_1
   */
  light* getNew_attribute_1()
  {
    return new_attribute_1;
  }

  /**
   * Set the value of new_attribute_2
   * @param value the new value of new_attribute_2
   */
  void setNew_attribute_2(tens* value)
  {
    new_attribute_2 = value;
  }

  /**
   * Get the value of new_attribute_2
   * @return the value of new_attribute_2
   */
  tens* getNew_attribute_2()
  {
    return new_attribute_2;
  }

  /**
   * Set the value of new_attribute_3
   * @param value the new value of new_attribute_3
   */
  void setNew_attribute_3(vibration* value)
  {
    new_attribute_3 = value;
  }

  /**
   * Get the value of new_attribute_3
   * @return the value of new_attribute_3
   */
  vibration* getNew_attribute_3()
  {
    return new_attribute_3;
  }

  void initAttributes();

};

#endif // MODULES_H
