CreateProfile()
{
	lr_start_transaction("ProfileService_CreateProfile");

		web_service_call( "StepName=CreateProfile_101",
		"SOAPMethod=ProfileService|BasicHttpBinding_IProfileService|CreateProfile",
		"ResponseParam=response",
		"Service=ProfileService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485545495.inf",
		BEGIN_ARGUMENTS,
		"xml:Profile="
			"<Profile>"
				"<Addresses nil=\"true\"></Addresses>"
				"<BirthDay>1</BirthDay>"
				"<BirthMonth>1</BirthMonth>"
				"<BirthYear>2000</BirthYear>"
				"<CustomerKey>"
					"<OpenIdClaimedIdentifier>e83b2130-2b09-4eb0-8393-c4cffbbd6d02</OpenIdClaimedIdentifier>"
				"</CustomerKey>"
				"<DisplayName nil=\"true\"></DisplayName>"
				"<EmailAddress>0f8ce6af-9621-4aad-9206-5f294cbf773f@gs.com</EmailAddress>"
				"<EmployeeId nil=\"true\"></EmployeeId>"
				"<FirstName>test</FirstName>"
				"<LastName>test</LastName>"
				"<MiddleName>test</MiddleName>"
				"<Phones nil=\"true\"></Phones>"
				"<PreferredStores nil=\"true\"></PreferredStores>"
			"</Profile>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>0f8ce6af-9621-4aad-9206-5f294cbf773f</string>"
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
	
	lr_end_transaction("ProfileService_CreateProfile", LR_AUTO);

	return 0;
}
