IsServiceAlive()
{
	lr_start_transaction("RealmAssociationService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_104",
		"SOAPMethod=RealmAssociationService|BasicHttpBinding_IRealmAssociationService|IsServiceAlive",
		"ResponseParam=response",
		"Service=RealmAssociationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484781848.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmAssociationService_IsServiceAlive", LR_AUTO);

	return 0;
}
