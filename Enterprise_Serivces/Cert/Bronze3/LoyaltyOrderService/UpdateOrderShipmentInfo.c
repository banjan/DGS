UpdateOrderShipmentInfo()
{
	lr_start_transaction("LoyaltyOrderService_UpdateOrderShipmentInfo");

	web_service_call( "StepName=UpdateOrderShipmentInfo_101",
		"SOAPMethod=LoyaltyOrderService|BasicHttpBinding_ILoyaltyOrderService|UpdateOrderShipmentInfo",
		"ResponseParam=response",
		"Service=LoyaltyOrderService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483564695.inf",
		BEGIN_ARGUMENTS,
		"xml:request="
			"<request>"
				"<MachineName>test</MachineName>"
				"<OrderNumber>51254</OrderNumber>"
				"<ShipmentInfo>"
					"<Address>"
						"<AddressGuid>00000000-0000-0000-0000-000000000000</AddressGuid>"
						"<AddressID nil=\"true\"></AddressID>"
						"<AddressLine1>8033 whitehart streetss</AddressLine1>"
						"<AddressLine2>8033 whitehart sta</AddressLine2>"
						"<AddressLine3 nil=\"true\"></AddressLine3>"
						"<AddressLine4 nil=\"true\"></AddressLine4>"
						"<AddressType>Shipping</AddressType>"
						"<City>frisco</City>"
						"<CompanyName></CompanyName>"
						"<Country nil=\"true\"></Country>"
						"<County nil=\"true\"></County>"
						"<FirstName>Tester</FirstName>"
						"<LastName>McTestersen</LastName>"
						"<PostalCode>75057</PostalCode>"
						"<StateOrProvince>TX</StateOrProvince>"
					"</Address>"
					"<Carrier>MailInnovations</Carrier>"
					"<CarrierUrl>http://www.ups-mi.net/packageID/PackageID.aspx?PID=1ZMITEST068331</CarrierUrl>"
					"<Email>test@gs.com</Email>"
					"<ShipDate>2010-10-22T12:55:59</ShipDate>"
					"<ShipmentNumber>123456789</ShipmentNumber>"
					"<TrackingNumber>1ZMITEST068331</TrackingNumber>"
				"</ShipmentInfo>"
				"<UpdateSource>CustomerService</UpdateSource>"
			"</request>",
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("LoyaltyOrderService_UpdateOrderShipmentInfo", LR_AUTO);

	return 0;
}
