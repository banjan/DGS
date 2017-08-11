GetProfile()
{
	lr_start_transaction("ProfileService_GetProfile");

	web_service_call( "StepName=GetProfile_101",
		"SOAPMethod=ProfileService|BasicHttpBinding_IProfileService|GetProfile",
		"ResponseParam=response",
		"Service=ProfileService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485539909.inf",
		BEGIN_ARGUMENTS,
		"OpenIdClaimedIdentifier=https://loginprod.gamestop.com/ID/yEPew3_h3EKZyIMggHO-_A",
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

	lr_end_transaction("ProfileService_GetProfile", LR_AUTO);

	return 0;
}
