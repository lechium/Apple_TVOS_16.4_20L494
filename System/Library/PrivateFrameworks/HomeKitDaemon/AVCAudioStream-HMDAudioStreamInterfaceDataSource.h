//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/AVCAudioStream.h>

@class NSDictionary, NSString;
@protocol AVCAudioStreamDelegate;

@interface AVCAudioStream (HMDAudioStreamInterfaceDataSource)

// Remaining properties
@property(readonly, nonatomic) NSDictionary *capabilities;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AVCAudioStreamDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long direction;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property(nonatomic) double rtcpSendIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(readonly) Class superclass;
@property(nonatomic) float volume;
@end

