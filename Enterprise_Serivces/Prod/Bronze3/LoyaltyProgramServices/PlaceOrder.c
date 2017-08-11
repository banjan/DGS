PlaceOrder()
{
	lr_start_transaction("LoyaltyOrderService_PlaceOrder");

	web_service_call( "StepName=PlaceOrder_102",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|PlaceOrder",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1488485732.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<Order>"
					"<CustomerID>1002771397</CustomerID>"
					"<OrderItems>"
						"<DraftOrderItem>"
							"<CategoryType>Physical</CategoryType>"
							"<ItemPoints>700</ItemPoints>"
							"<Quantity>1</Quantity>"
							"<RewardID>91247</RewardID>"
							"<SKU>990004</SKU>"
							"<SmallImageUrl>https://www.gamestop.com/gs/images/lpu/list/Lexar_4GB_SDHC.png</SmallImageUrl>"
							"<Title>Lexar 4GB SDHC Card</Title>"
						"</DraftOrderItem>"
					"</OrderItems>"
					"<ShipmentInfo>"
						"<Address>"
							"<AddressGuid>00000000-0000-0000-0000-000000000000</AddressGuid>"
							"<AddressLine1>8033 whitehart sta</AddressLine1>"
							"<AddressLine2>8033 whitehart sta</AddressLine2>"
							"<AddressLine3 nil=\"true\"></AddressLine3>"
							"<AddressLine4 nil=\"true\"></AddressLine4>"
							"<AddressType>Shipping</AddressType>"
							"<City>Dallas</City>"
							"<CompanyName></CompanyName>"
							"<Country nil=\"true\"></Country>"
							"<County nil=\"true\"></County>"
							"<FirstName>Test Man</FirstName>"
							"<IsDefault>false</IsDefault>"
							"<LastName>Tester</LastName>"
							"<PostalCode>75249</PostalCode>"
							"<StateOrProvince>TX</StateOrProvince>"
						"</Address>"
						"<Carrier>MailInnovations</Carrier>"
						"<CarrierUrl>http://www.ups-mi.net/packageID/PackageID.aspx?PID=1ZMITEST287546</CarrierUrl>"
						"<Email>test@gs.com</Email>"
						"<ShipDate>2017-01-04T14:38:01</ShipDate>"
						"<ShipmentNumber>862</ShipmentNumber>"
						"<TrackingNumber>1ZMITEST287546</TrackingNumber>"
					"</ShipmentInfo>"
					"<TotalPoints>700</TotalPoints>"
				"</Order>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_PlaceOrder", LR_AUTO);

	return 0;
}
