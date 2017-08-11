GetPastPurchases()
{
	lr_start_transaction("ProfileService_GetPastPurchases");

	web_service_call( "StepName=GetPastPurchases_101",
		"SOAPMethod=ProfileService|BasicHttpBinding_IProfileService|GetPastPurchases",
		"ResponseParam=response",
		"Service=ProfileService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485543858.inf",
		BEGIN_ARGUMENTS,
		"OpenId=abcde",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>ee378a17-4acc-475e-b100-509195a48980</string>"
				"</Text>"
			"</CorrelationID>",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ProfileService_GetPastPurchases", LR_AUTO);

	return 0;
}
