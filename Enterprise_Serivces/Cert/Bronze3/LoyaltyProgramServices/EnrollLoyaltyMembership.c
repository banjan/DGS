EnrollLoyaltyMembership()
{
	
	lr_start_transaction("LoyaltyMembershipService_EnrollLoyaltyMembership");

	web_service_call( "StepName=EnrollLoyaltyMembership_101",
		"SOAPMethod=LoyaltyMembershipService|BasicHttpBinding_ILoyaltyMembershipService|EnrollLoyaltyMembership",
		"ResponseParam=response",
		"Service=LoyaltyMembershipService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1499704130.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<CustomerID>1258147125</CustomerID>"
				"<EmailAddress>73bfdcb-66e2-4e10-8176-1efc0d048c01@gstemp.com</EmailAddress>"
				"<LoyaltyCardNumber>3887465050845</LoyaltyCardNumber>"
				"<Tier>3887</Tier>"
				"<ExpirationDate>2018-06-26T15:15:04.7703581Z</ExpirationDate>"
				"<OpenIDClaimedIdentifier>8aa4e614-d33c-4fc1-8615-1471fe1188cb</OpenIDClaimedIdentifier>"
				"<UserName>bcccabc5-987b-4832-924b-33b38b52ede3@gstemp.com</UserName>"
				"<CardDescription>New Card Enrollment</CardDescription>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyMembershipService_EnrollLoyaltyMembership", LR_AUTO);

	return 0;
}
