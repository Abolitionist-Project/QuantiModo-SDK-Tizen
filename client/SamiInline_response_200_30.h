/*
 * SamiInline_response_200_30.h
 * 
 * 
 */

#ifndef SamiInline_response_200_30_H_
#define SamiInline_response_200_30_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUserVariable.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_30: public SamiObject {
public:
    SamiInline_response_200_30();
    SamiInline_response_200_30(String* json);
    virtual ~SamiInline_response_200_30();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_30* fromJson(String* obj);

    
    SamiUserVariable* getPData();
    void setPData(SamiUserVariable* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiUserVariable* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_30_H_ */
