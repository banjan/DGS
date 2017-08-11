IsServiceHealthy()
{
	lr_start_transaction("RealmAssociationService_IsServiceHealthy");

	web_service_call( "StepName=IsServiceHealthy_104",
		"SOAPMethod=RealmAssociationService|BasicHttpBinding_IRealmAssociationService|IsServiceHealthy",
		"ResponseParam=response",
		"Service=RealmAssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484781918.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmAssociationService_IsServiceHealthy", LR_AUTO);

	return 0;
}
