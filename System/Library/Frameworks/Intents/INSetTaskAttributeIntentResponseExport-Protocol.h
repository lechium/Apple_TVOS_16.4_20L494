//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INTask;

@protocol INSetTaskAttributeIntentResponseExport <NSObject, JSExport>
@property(nonatomic) unsigned long long warnings;
@property(copy, nonatomic) INTask *modifiedTask;
@property(readonly, nonatomic) long long code;
@end

