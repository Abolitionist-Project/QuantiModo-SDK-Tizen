/*
 * SamiInline_response_200_33.h
 * 
 * 
 */

#ifndef SamiInline_response_200_33_H_
#define SamiInline_response_200_33_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiVariableUserSource.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_33: public SamiObject {
public:
    SamiInline_response_200_33();
    SamiInline_response_200_33(String* json);
    virtual ~SamiInline_response_200_33();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_33* fromJson(String* obj);

    
    SamiVariableUserSource* getPData();
    void setPData(SamiVariableUserSource* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiVariableUserSource* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_33_H_ */
