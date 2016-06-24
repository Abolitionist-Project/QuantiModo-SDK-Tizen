/*
 * SamiCredential.h
 * 
 * 
 */

#ifndef SamiCredential_H_
#define SamiCredential_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiCredential: public SamiObject {
public:
    SamiCredential();
    SamiCredential(String* json);
    virtual ~SamiCredential();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCredential* fromJson(String* obj);

    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);
    Integer* getPConnectorId();
    void setPConnectorId(Integer* pConnector_id);
    String* getPAttrKey();
    void setPAttrKey(String* pAttr_key);
    String* getPAttrValue();
    void setPAttrValue(String* pAttr_value);
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);

private:
    Integer* pUser_id;
Integer* pConnector_id;
String* pAttr_key;
String* pAttr_value;
DateTime* pCreated_at;
DateTime* pUpdated_at;
};

} /* namespace Swagger */

#endif /* SamiCredential_H_ */
