SubmitHops()
{
	lr_start_transaction("HopsService_SubmitHops");

	web_service_call( "StepName=SubmitHops_101",
		"SOAPMethod=HopsWorkflowService|BasicHttpBinding_IHopsWorkflowService|SubmitHops",
		"ResponseParam=response",
		"Service=HopsWorkflowService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484237714.inf",
		BEGIN_ARGUMENTS,
		"xml:SubmitWorkflowHopsRequest="
			"<SubmitWorkflowHopsRequest>"
				"<MachineName>test</MachineName>"
				"<HopsRequest>"
					"<ContactPreference>Both</ContactPreference>"
					"<CustomerID>1257340252</CustomerID>"
					"<EdgeCardNumber>1234</EdgeCardNumber>"
					"<EmailAddress>test@gsmail.com</EmailAddress>"
					"<FirstName>Tester</FirstName>"
					"<HopsGuid>477a192a-0fbc-4497-9750-cbcb09f48b4d</HopsGuid>"
					"<LastName>McTester</LastName>"
					"<LoyaltyCardNumber>1234567890123</LoyaltyCardNumber>"
					"<MobileNumber>1234567890</MobileNumber>"
					"<Quantity>1</Quantity>"
					"<Sku>500223</Sku>"
					"<Stores>"
						"<HopsRequestStore>"
							"<OrderPreference>1</OrderPreference>"
							"<StoreCountryCode>US</StoreCountryCode>"
							"<StoreNumber>1032</StoreNumber>"
						"</HopsRequestStore>"
					"</Stores>"
				"</HopsRequest>"
			"</SubmitWorkflowHopsRequest>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("HopsService_SubmitHops", LR_AUTO);

	return 0;
}
