ClearExpiredNonces()
{
	lr_start_transaction("NonceService_ClearExpiredNonces");

	web_service_call( "StepName=ClearExpiredNonces_101",
		"SOAPMethod=NonceService|BasicHttpBinding_INonceService|ClearExpiredNonces",
		"ResponseParam=response",
		"Service=NonceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483573676.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Days>1</Days>"
				"<NonceType>IsIssued</NonceType>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("NonceService_ClearExpiredNonces", LR_AUTO);

	return 0;
}
