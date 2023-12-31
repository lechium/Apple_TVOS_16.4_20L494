//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperation, NSOperationQueue;

@interface SHLOperationQueue : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    NSOperation *_tailOperation;	// 16 = 0x10
}

+ (id)defaultQueue;	// IMP=0x004000000001f8a1
- (void).cxx_destruct;	// IMP=0x002000000001fbe4
@property(nonatomic) __weak NSOperation *tailOperation; // @synthesize tailOperation=_tailOperation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)cancelAllOperations;	// IMP=0x001000000001fb53
- (void)addOperation:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x001000000001f9a3
- (void)addOperation:(id)arg1;	// IMP=0x000000000001f98f
- (id)initOperationQueue;	// IMP=0x001000000001f906

@end

