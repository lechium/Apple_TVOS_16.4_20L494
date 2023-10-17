//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class CNDescriptionBuilder, NSDate, NSError;

@protocol CNFutureImpl <NSObject>
- (void)updateDescriptionWithBuilder:(CNDescriptionBuilder *)arg1;
- (void)addFailureBlock:(void (^)(NSError *))arg1;
- (void)addSuccessBlock:(void (^)(id))arg1;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id *)arg2;

@optional
- (void)_flushCompletionBlocks;
- (_Bool)cancel;
- (_Bool)finishWithResult:(id)arg1 error:(NSError *)arg2;
@end

