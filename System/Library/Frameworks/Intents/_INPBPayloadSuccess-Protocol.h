//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentSlotValue;

@protocol _INPBPayloadSuccess <NSObject>
@property(readonly, nonatomic) _Bool hasResolvedValue;
@property(retain, nonatomic) _INPBIntentSlotValue *resolvedValue;
@property(readonly, nonatomic) _Bool hasResolvedKeyPath;
@property(copy, nonatomic) NSString *resolvedKeyPath;
@end

