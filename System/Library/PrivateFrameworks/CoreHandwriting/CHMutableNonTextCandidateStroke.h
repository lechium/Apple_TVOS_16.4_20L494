//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHNonTextCandidateStroke.h"

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke
{
}

- (id)description;	// IMP=0x00000000000808a0
- (_Bool)_adjustSupportForContainerClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x0000000000080150
- (_Bool)_adjustSupportForLineClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x000000000007f7b0
- (_Bool)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;	// IMP=0x000000000007f610
- (_Bool)adjustSupportByRemovingStrokeIdentifier:(id)arg1;	// IMP=0x000000000007f5f0
- (_Bool)_removeSupportForStrokeIdentifier:(id)arg1;	// IMP=0x000000000007f530
- (void)_setSupportForStrokeIdentifier:(id)arg1 support:(double)arg2;	// IMP=0x000000000007f460
@property(retain, nonatomic) NSDictionary *supportByStrokeIdentifier; // @dynamic supportByStrokeIdentifier;

@end
