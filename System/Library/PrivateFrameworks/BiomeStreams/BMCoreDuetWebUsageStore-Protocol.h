//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSPredicate, _CDContextualKeyPath, _DKEvent;
@protocol OS_dispatch_queue;

@protocol BMCoreDuetWebUsageStore
- (_Bool)saveKnowledgeEvent:(_DKEvent *)arg1 error:(id *)arg2;
- (void)removeObjects:(NSArray *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2 responseQueue:(NSObject<OS_dispatch_queue> *)arg3 withCompletion:(void (^)(_Bool))arg4;
- (void)addObjects:(NSArray *)arg1 andRemoveObjects:(NSArray *)arg2 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg3 responseQueue:(NSObject<OS_dispatch_queue> *)arg4 withCompletion:(void (^)(_Bool))arg5;
- (NSArray *)removeObjectsMatchingPredicate:(NSPredicate *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (_Bool)addContextValue:(id)arg1 toArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
@end

