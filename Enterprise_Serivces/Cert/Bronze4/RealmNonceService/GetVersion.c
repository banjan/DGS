GetVersion()
{
	lr_start_transaction("RealmNonceService_GetVersion");

	web_service_call( "StepName=GetVersion_101",
		"SOAPMethod=RealmNonceService|BasicHttpBinding_IRealmNonceService|GetVersion",
		"ResponseParam=response",
		"Service=RealmNonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483980952.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmNonceService_GetVersion", LR_AUTO);

	return 0;
}
