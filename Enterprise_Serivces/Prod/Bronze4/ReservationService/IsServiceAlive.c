IsServiceAlive()
{
	lr_start_transaction("ReservationService_IsServiceAlive");

	web_service_call( "StepName=IsServiceAlive_102",
		"SOAPMethod=ReservationService|BasicHttpBinding_IReservationService|IsServiceAlive",
		"ResponseParam=response",
		"Service=ReservationService",
		"ExpectedResponse=SoapResult",
		"Snapshot=t1484168146.inf",
		BEGIN_ARGUMENTS,
		END_ARGUMENTS,
		BEGIN_RESULT,
		END_RESULT,
		LAST);

	lr_end_transaction("ReservationService_IsServiceAlive", LR_AUTO);

	return 0;
}
