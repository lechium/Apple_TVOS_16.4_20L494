//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentExecutionResult, _INPBIntentMetadata, _INPBVoiceCommandDeviceInformation;

@protocol _INPBRunVoiceCommandIntent <NSObject>
@property(readonly, nonatomic) _Bool hasVoiceCommand;
@property(retain, nonatomic) _INPBDataString *voiceCommand;
@property(readonly, nonatomic) _Bool hasPreviousIntentIdentifier;
@property(copy, nonatomic) NSString *previousIntentIdentifier;
@property(readonly, nonatomic) _Bool hasOriginDevice;
@property(retain, nonatomic) _INPBVoiceCommandDeviceInformation *originDevice;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasExecutionResult;
@property(retain, nonatomic) _INPBIntentExecutionResult *executionResult;
@end

