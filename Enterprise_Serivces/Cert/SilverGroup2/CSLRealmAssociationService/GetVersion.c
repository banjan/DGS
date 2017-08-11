GetVersion()
{
	lr_start_transaction("RealmAssociationService_GetVersion");

	web_service_call( "StepName=GetVersion_104",
		"SOAPMethod=RealmAssociationService|BasicHttpBinding_IRealmAssociationService|GetVersion",
		"ResponseParam=response",
		"Service=RealmAssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484781793.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmAssociationService_GetVersion", LR_AUTO);

	return 0;
}
