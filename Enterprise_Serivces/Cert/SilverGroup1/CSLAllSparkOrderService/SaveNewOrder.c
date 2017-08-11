SaveNewOrder()
{
	lr_start_transaction("OrderService_SaveNewOrder");

	web_service_call( "StepName=SaveNewOrder_101",
		"SOAPMethod=OrderService|OrderService_HTTP|SaveNewOrder",
		"ResponseParam=response",
		"Service=OrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1485883536.inf",
		BEGIN_ARGUMENTS,
		"xml:AdditionalDeliveryMethods="
			"<AdditionalDeliveryMethods>"
				"<BaseDeliveryMethod type=\"LockerDeliveryMethod\">"
					"<CustomerID>abcde</CustomerID>"
					"<EmailAddress>test@gs.com</EmailAddress>"
				"</BaseDeliveryMethod>"
			"</AdditionalDeliveryMethods>",
		"xml:Order="
			"<Order>"
				"<OrderRequestGUID>3408e959-5454-4a39-bbc6-ba0d62f3d82f</OrderRequestGUID>"
				"<PartnerKey>TEST-US</PartnerKey>"
				"<AllSparkID>34075</AllSparkID>"
				"<ClientReferenceCode>test</ClientReferenceCode>"
				"<PurchasingCustomerId>abcde</PurchasingCustomerId>"
				"<ScheduledDeliveryDateUTC>2017-02-01T13:20:00-05:00</ScheduledDeliveryDateUTC>"
			"</Order>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>4408e959-5454-4a39-bbc6-ba0d62f3d82f</string>"
				"</Text>"
			"</CorrelationID>",
		"xml:MachineName="
			"<MachineName>"
				"<Text>"
					"<string>test</string>"
				"</Text>"
			"</MachineName>",
		"xml:InternationalValue="
			"<InternationalValue nil=\"true\"></InternationalValue>",
		"xml:CountryCode="
			"<CountryCode>"
				"<Text>"
					"<string>US</string>"
				"</Text>"
			"</CountryCode>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("OrderService_SaveNewOrder", LR_AUTO);

	return 0;
}
