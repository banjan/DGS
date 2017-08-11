SubmitHopsRequest()
{
	lr_start_transaction("ECommerceService_SubmitHopsRequest");

	web_service_call( "StepName=SubmitHopsRequest_101",
		"SOAPMethod=ECommerceService|ECommerceService|SubmitHopsRequest",
		"ResponseParam=response",
		"Service=ECommerceService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484874425.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<International nil=\"true\"></International>"
				"<ContactPreference>Both</ContactPreference>"
				"<CustomerID>2</CustomerID>"
				"<EdgeCardNumber>1234</EdgeCardNumber>"
				"<EmailAddress>gstest022@gmail.com</EmailAddress>"
				"<FirstName>Tester</FirstName>"
				"<HopsId>c5ec7172-29b0-47f1-aa84-1b82880138d5</HopsId>"
				"<LastName>McTester</LastName>"
				"<LoyaltyCardNumber>1234567890123</LoyaltyCardNumber>"
				"<MobileNumber>1234567890</MobileNumber>"
				"<Quantity>1</Quantity>"
				"<Sku>500223</Sku>"
				"<Stores>"
					"<PreferredStore>"
						"<OrderPreference>1</OrderPreference>"
						"<StoreCountryCode>US</StoreCountryCode>"
						"<StoreNumber>1032</StoreNumber>"
					"</PreferredStore>"
				"</Stores>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ECommerceService_SubmitHopsRequest", LR_AUTO);

	return 0;
}
