SearchCustomer()
{
	lr_start_transaction("CustomerService_SearchCustomer");

	web_service_call( "StepName=SearchCustomer_101",
		"SOAPMethod=CustomerService|BasicHttpBinding_ICustomerService|SearchCustomer",
		"ResponseParam=response",
		"Service=CustomerService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1486569126.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<SearchCriteria>"
					"<EdgeID nil=\"true\"></EdgeID>"
					"<EmailAddress nil=\"true\"></EmailAddress>"
					"<LastName>Smith</LastName>"
					"<LoyaltyCardNumber nil=\"true\"></LoyaltyCardNumber>"
					"<OpenIDClaimedIdentifier nil=\"true\"></OpenIDClaimedIdentifier>"
					"<PhoneNumber nil=\"true\"></PhoneNumber>"
					"<UserName nil=\"true\"></UserName>"
					"<ZipCode>75051</ZipCode>"
				"</SearchCriteria>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("CustomerService_SearchCustomer", LR_AUTO);

	return 0;
}
