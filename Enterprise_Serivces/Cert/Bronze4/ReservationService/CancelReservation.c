CancelReservation()
{
	lr_start_transaction("ReservationService_CancelReservation");

	web_service_call( "StepName=CancelReservation_101",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|CancelReservation",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1483988791.inf",
		BEGIN_ARGUMENTS,
		"xml:ReservationCancel="
			"<ReservationCancel>"
				"<CancelDate>2017-01-09</CancelDate>"
				"<OrderReferenceNumber>48012342</OrderReferenceNumber>"
				"<SKU>952123</SKU>"
				"<StoreNumber>1782</StoreNumber>"
			"</ReservationCancel>",
		"xml:CorrelationID="
			"<CorrelationID>"
				"<Text>"
					"<string>238fd695-a962-4006-8483-7e3fbe2e8259</string>"
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

	lr_end_transaction("ReservationService_CancelReservation", LR_AUTO);

	return 0;
}
