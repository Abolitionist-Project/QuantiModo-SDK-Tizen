/*
 * SamiUserTag.h
 * 
 * 
 */

#ifndef SamiUserTag_H_
#define SamiUserTag_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::Long;


namespace Swagger {

class SamiUserTag: public SamiObject {
public:
    SamiUserTag();
    SamiUserTag(String* json);
    virtual ~SamiUserTag();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserTag* fromJson(String* obj);

    Integer* getPTaggedVariableId();
    void setPTaggedVariableId(Integer* pTaggedVariableId);
    Integer* getPTagVariableId();
    void setPTagVariableId(Integer* pTagVariableId);
    Long* getPConversionFactor();
    void setPConversionFactor(Long* pConversionFactor);

private:
    Integer* pTaggedVariableId;
Integer* pTagVariableId;
Long* pConversionFactor;
};

} /* namespace Swagger */

#endif /* SamiUserTag_H_ */
