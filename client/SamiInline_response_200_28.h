/*
 * SamiInline_response_200_28.h
 * 
 * 
 */

#ifndef SamiInline_response_200_28_H_
#define SamiInline_response_200_28_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUpdate.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_28: public SamiObject {
public:
    SamiInline_response_200_28();
    SamiInline_response_200_28(String* json);
    virtual ~SamiInline_response_200_28();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_28* fromJson(String* obj);

    
    SamiUpdate* getPData();
    void setPData(SamiUpdate* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiUpdate* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_28_H_ */
