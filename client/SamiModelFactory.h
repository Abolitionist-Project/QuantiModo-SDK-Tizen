#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "SamiObject.h"

#include "SamiCommonResponse.h"
#include "SamiConnection.h"
#include "SamiConnector.h"
#include "SamiConnectorInfo.h"
#include "SamiConnectorInfoHistoryItem.h"
#include "SamiConnectorInstruction.h"
#include "SamiConversionStep.h"
#include "SamiCorrelation.h"
#include "SamiCredential.h"
#include "SamiHumanTime.h"
#include "SamiInline_response_200.h"
#include "SamiInline_response_200_1.h"
#include "SamiInline_response_200_10.h"
#include "SamiInline_response_200_11.h"
#include "SamiInline_response_200_12.h"
#include "SamiInline_response_200_2.h"
#include "SamiInline_response_200_3.h"
#include "SamiInline_response_200_4.h"
#include "SamiInline_response_200_5.h"
#include "SamiInline_response_200_6.h"
#include "SamiInline_response_200_7.h"
#include "SamiInline_response_200_8.h"
#include "SamiInline_response_200_9.h"
#include "SamiJsonErrorResponse.h"
#include "SamiMeasurement.h"
#include "SamiMeasurementDelete.h"
#include "SamiMeasurementRange.h"
#include "SamiMeasurementSet.h"
#include "SamiMeasurementSource.h"
#include "SamiPairs.h"
#include "SamiPermission.h"
#include "SamiPostCorrelation.h"
#include "SamiPostVote.h"
#include "SamiTrackingReminder.h"
#include "SamiTrackingReminderDelete.h"
#include "SamiTrackingReminderNotification.h"
#include "SamiTrackingReminderNotificationSkip.h"
#include "SamiTrackingReminderNotificationSnooze.h"
#include "SamiTrackingReminderNotificationTrack.h"
#include "SamiUnit.h"
#include "SamiUnitCategory.h"
#include "SamiUpdate.h"
#include "SamiUser.h"
#include "SamiUserTag.h"
#include "SamiUserTokenFailedResponse.h"
#include "SamiUserTokenRequest.h"
#include "SamiUserTokenRequestInnerUserField.h"
#include "SamiUserTokenSuccessfulResponse.h"
#include "SamiUserTokenSuccessfulResponseInnerUserField.h"
#include "SamiUserVariable.h"
#include "SamiUserVariableRelationship.h"
#include "SamiUserVariables.h"
#include "SamiValueObject.h"
#include "SamiVariable.h"
#include "SamiVariableCategory.h"
#include "SamiVariableNew.h"
#include "SamiVariableUserSource.h"
#include "SamiVariablesNew.h"
#include "SamiVote.h"
#include "SamiVoteDelete.h"

namespace Swagger {
  void*
  create(String type) {
    if(type.Equals(L"SamiCommonResponse", true)) {
      return new SamiCommonResponse();
    }
    if(type.Equals(L"SamiConnection", true)) {
      return new SamiConnection();
    }
    if(type.Equals(L"SamiConnector", true)) {
      return new SamiConnector();
    }
    if(type.Equals(L"SamiConnectorInfo", true)) {
      return new SamiConnectorInfo();
    }
    if(type.Equals(L"SamiConnectorInfoHistoryItem", true)) {
      return new SamiConnectorInfoHistoryItem();
    }
    if(type.Equals(L"SamiConnectorInstruction", true)) {
      return new SamiConnectorInstruction();
    }
    if(type.Equals(L"SamiConversionStep", true)) {
      return new SamiConversionStep();
    }
    if(type.Equals(L"SamiCorrelation", true)) {
      return new SamiCorrelation();
    }
    if(type.Equals(L"SamiCredential", true)) {
      return new SamiCredential();
    }
    if(type.Equals(L"SamiHumanTime", true)) {
      return new SamiHumanTime();
    }
    if(type.Equals(L"SamiInline_response_200", true)) {
      return new SamiInline_response_200();
    }
    if(type.Equals(L"SamiInline_response_200_1", true)) {
      return new SamiInline_response_200_1();
    }
    if(type.Equals(L"SamiInline_response_200_10", true)) {
      return new SamiInline_response_200_10();
    }
    if(type.Equals(L"SamiInline_response_200_11", true)) {
      return new SamiInline_response_200_11();
    }
    if(type.Equals(L"SamiInline_response_200_12", true)) {
      return new SamiInline_response_200_12();
    }
    if(type.Equals(L"SamiInline_response_200_2", true)) {
      return new SamiInline_response_200_2();
    }
    if(type.Equals(L"SamiInline_response_200_3", true)) {
      return new SamiInline_response_200_3();
    }
    if(type.Equals(L"SamiInline_response_200_4", true)) {
      return new SamiInline_response_200_4();
    }
    if(type.Equals(L"SamiInline_response_200_5", true)) {
      return new SamiInline_response_200_5();
    }
    if(type.Equals(L"SamiInline_response_200_6", true)) {
      return new SamiInline_response_200_6();
    }
    if(type.Equals(L"SamiInline_response_200_7", true)) {
      return new SamiInline_response_200_7();
    }
    if(type.Equals(L"SamiInline_response_200_8", true)) {
      return new SamiInline_response_200_8();
    }
    if(type.Equals(L"SamiInline_response_200_9", true)) {
      return new SamiInline_response_200_9();
    }
    if(type.Equals(L"SamiJsonErrorResponse", true)) {
      return new SamiJsonErrorResponse();
    }
    if(type.Equals(L"SamiMeasurement", true)) {
      return new SamiMeasurement();
    }
    if(type.Equals(L"SamiMeasurementDelete", true)) {
      return new SamiMeasurementDelete();
    }
    if(type.Equals(L"SamiMeasurementRange", true)) {
      return new SamiMeasurementRange();
    }
    if(type.Equals(L"SamiMeasurementSet", true)) {
      return new SamiMeasurementSet();
    }
    if(type.Equals(L"SamiMeasurementSource", true)) {
      return new SamiMeasurementSource();
    }
    if(type.Equals(L"SamiPairs", true)) {
      return new SamiPairs();
    }
    if(type.Equals(L"SamiPermission", true)) {
      return new SamiPermission();
    }
    if(type.Equals(L"SamiPostCorrelation", true)) {
      return new SamiPostCorrelation();
    }
    if(type.Equals(L"SamiPostVote", true)) {
      return new SamiPostVote();
    }
    if(type.Equals(L"SamiTrackingReminder", true)) {
      return new SamiTrackingReminder();
    }
    if(type.Equals(L"SamiTrackingReminderDelete", true)) {
      return new SamiTrackingReminderDelete();
    }
    if(type.Equals(L"SamiTrackingReminderNotification", true)) {
      return new SamiTrackingReminderNotification();
    }
    if(type.Equals(L"SamiTrackingReminderNotificationSkip", true)) {
      return new SamiTrackingReminderNotificationSkip();
    }
    if(type.Equals(L"SamiTrackingReminderNotificationSnooze", true)) {
      return new SamiTrackingReminderNotificationSnooze();
    }
    if(type.Equals(L"SamiTrackingReminderNotificationTrack", true)) {
      return new SamiTrackingReminderNotificationTrack();
    }
    if(type.Equals(L"SamiUnit", true)) {
      return new SamiUnit();
    }
    if(type.Equals(L"SamiUnitCategory", true)) {
      return new SamiUnitCategory();
    }
    if(type.Equals(L"SamiUpdate", true)) {
      return new SamiUpdate();
    }
    if(type.Equals(L"SamiUser", true)) {
      return new SamiUser();
    }
    if(type.Equals(L"SamiUserTag", true)) {
      return new SamiUserTag();
    }
    if(type.Equals(L"SamiUserTokenFailedResponse", true)) {
      return new SamiUserTokenFailedResponse();
    }
    if(type.Equals(L"SamiUserTokenRequest", true)) {
      return new SamiUserTokenRequest();
    }
    if(type.Equals(L"SamiUserTokenRequestInnerUserField", true)) {
      return new SamiUserTokenRequestInnerUserField();
    }
    if(type.Equals(L"SamiUserTokenSuccessfulResponse", true)) {
      return new SamiUserTokenSuccessfulResponse();
    }
    if(type.Equals(L"SamiUserTokenSuccessfulResponseInnerUserField", true)) {
      return new SamiUserTokenSuccessfulResponseInnerUserField();
    }
    if(type.Equals(L"SamiUserVariable", true)) {
      return new SamiUserVariable();
    }
    if(type.Equals(L"SamiUserVariableRelationship", true)) {
      return new SamiUserVariableRelationship();
    }
    if(type.Equals(L"SamiUserVariables", true)) {
      return new SamiUserVariables();
    }
    if(type.Equals(L"SamiValueObject", true)) {
      return new SamiValueObject();
    }
    if(type.Equals(L"SamiVariable", true)) {
      return new SamiVariable();
    }
    if(type.Equals(L"SamiVariableCategory", true)) {
      return new SamiVariableCategory();
    }
    if(type.Equals(L"SamiVariableNew", true)) {
      return new SamiVariableNew();
    }
    if(type.Equals(L"SamiVariableUserSource", true)) {
      return new SamiVariableUserSource();
    }
    if(type.Equals(L"SamiVariablesNew", true)) {
      return new SamiVariablesNew();
    }
    if(type.Equals(L"SamiVote", true)) {
      return new SamiVote();
    }
    if(type.Equals(L"SamiVoteDelete", true)) {
      return new SamiVoteDelete();
    }
    
    if(type.Equals(L"String", true)) {
      return new String();
    }
    if(type.Equals(L"Integer", true)) {
      return new Integer();
    }
    if(type.Equals(L"Long", true)) {
      return new Long();
    }
    if(type.Equals(L"DateTime", true)) {
      return new DateTime();
    }
    return null;
  }
} /* namespace Swagger */

#endif /* ModelFactory_H_ */
