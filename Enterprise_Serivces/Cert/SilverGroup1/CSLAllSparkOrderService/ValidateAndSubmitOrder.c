ValidateAndSubmitOrder()
{
	lr_start_transaction("OrderService_ValidateAndSubmitOrder");

	web_service_call( "StepName=ValidateAndSubmitOrder_101",
		"SOAPMethod=OrderService|OrderService_HTTP|ValidateAndSubmitOrder",
		"ResponseParam=response",
		"Service=OrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1488235846.inf",
		BEGIN_ARGUMENTS,
		"CatalogID=1",
		"CatalogIDSpecified=true",
		"IsProductActiveFromPartner=true",
		"IsProductActiveFromPartnerSpecified=true",
		"IsProductActiveFromProvider=true",
		"IsProductActiveFromProviderSpecified=true",
		"IsProductAvailableForPresell=true",
		"IsProductAvailableForPresellSpecified=true",
		"IsProductReleased=true",
		"IsProductReleasedSpecified=true",
		"OrderRequestGUID=0bdd7b7c-daac-4323-80fc-978bbce40dab",
		"PartnerID=2",
		"PartnerIDSpecified=true",
		"PartnerKey=TEST-US",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>a4581bc9-1b56-4353-b9e8-d0533aa80400</string>"
				"</Text>"
			"</CorrelationID>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OrderService_ValidateAndSubmitOrder", LR_AUTO);

	return 0;
}
