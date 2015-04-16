/*
 * SamiVariableCategory.h
 * 
 * 
 */

#ifndef SamiVariableCategory_H_
#define SamiVariableCategory_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiVariableCategory: public SamiObject {
public:
    SamiVariableCategory();
    SamiVariableCategory(String* json);
    virtual ~SamiVariableCategory();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVariableCategory* fromJson(String* obj);

    
    String* getPName();
    void setPName(String* pName);
    

private:
    String* pName;
    
};

} /* namespace Swagger */

#endif /* SamiVariableCategory_H_ */
