//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface NSOperation (CKKSUsefulPrintingOperation)
- (void)removeDependenciesUponCompletion;	// IMP=0x0010000000153fa4
- (void)addNullableDependency:(id)arg1;	// IMP=0x0010000000153f8b
- (_Bool)isPending;	// IMP=0x0010000000153f40
- (id)debugDescription;	// IMP=0x0010000000153e01
- (id)description;	// IMP=0x0010000000153cc9
- (id)pendingDependenciesString:(id)arg1;	// IMP=0x0010000000153b94
- (void)linearDependenciesWithSelfFirst:(id)arg1;	// IMP=0x0010000000153979
- (void)linearDependencies:(id)arg1;	// IMP=0x00100000001537dd
- (id)selfname;	// IMP=0x00100000001536f9
@end

