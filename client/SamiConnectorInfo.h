/*
 * SamiConnectorInfo.h
 * 
 * 
 */

#ifndef SamiConnectorInfo_H_
#define SamiConnectorInfo_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;
using Tizen::Base::Boolean;
#include "SamiConnectorInfoHistoryItem.h"
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiConnectorInfo: public SamiObject {
public:
    SamiConnectorInfo();
    SamiConnectorInfo(String* json);
    virtual ~SamiConnectorInfo();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConnectorInfo* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    Boolean* getPConnected();
    void setPConnected(Boolean* pConnected);
    
    String* getPError();
    void setPError(String* pError);
    
    IList* getPHistory();
    void setPHistory(IList* pHistory);
    

private:
    Integer* pId;
    Boolean* pConnected;
    String* pError;
    IList* pHistory;
    
};

} /* namespace Swagger */

#endif /* SamiConnectorInfo_H_ */
