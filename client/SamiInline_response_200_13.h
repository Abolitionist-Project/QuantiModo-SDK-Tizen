/*
 * SamiInline_response_200_13.h
 * 
 * 
 */

#ifndef SamiInline_response_200_13_H_
#define SamiInline_response_200_13_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCommonVariableRelationship.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_13: public SamiObject {
public:
    SamiInline_response_200_13();
    SamiInline_response_200_13(String* json);
    virtual ~SamiInline_response_200_13();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_13* fromJson(String* obj);

    
    SamiCommonVariableRelationship* getPData();
    void setPData(SamiCommonVariableRelationship* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiCommonVariableRelationship* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_13_H_ */
