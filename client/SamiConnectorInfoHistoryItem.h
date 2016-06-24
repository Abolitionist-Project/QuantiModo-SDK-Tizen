/*
 * SamiConnectorInfoHistoryItem.h
 * 
 * 
 */

#ifndef SamiConnectorInfoHistoryItem_H_
#define SamiConnectorInfoHistoryItem_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiConnectorInfoHistoryItem: public SamiObject {
public:
    SamiConnectorInfoHistoryItem();
    SamiConnectorInfoHistoryItem(String* json);
    virtual ~SamiConnectorInfoHistoryItem();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConnectorInfoHistoryItem* fromJson(String* obj);

    Integer* getPNumberOfMeasurements();
    void setPNumberOfMeasurements(Integer* pNumberOfMeasurements);
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    String* getPMessage();
    void setPMessage(String* pMessage);
    String* getPCreatedAt();
    void setPCreatedAt(String* pCreatedAt);

private:
    Integer* pNumberOfMeasurements;
Boolean* pSuccess;
String* pMessage;
String* pCreatedAt;
};

} /* namespace Swagger */

#endif /* SamiConnectorInfoHistoryItem_H_ */
