//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSNumber;

@protocol INBooleanResolutionResultExport <NSObject, JSExport>
+ (id)confirmationRequiredWithValueToConfirm:(NSNumber *)arg1;
+ (id)successWithResolvedValue:(_Bool)arg1;
- (id)init;
@end

