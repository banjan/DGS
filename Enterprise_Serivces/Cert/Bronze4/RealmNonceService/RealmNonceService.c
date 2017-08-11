RealmNonceService()
{
	lr_start_transaction("RealmNonceService_ClearExpiredNonces");

	web_service_call( "StepName=ClearExpiredNonces_101",
		"SOAPMethod=RealmNonceService|BasicHttpBinding_IRealmNonceService|ClearExpiredNonces",
		"ResponseParam=response",
		"Service=RealmNonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483980780.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Days>1</Days>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("RealmNonceService_ClearExpiredNonces", LR_AUTO);
	
	return 0;
}
