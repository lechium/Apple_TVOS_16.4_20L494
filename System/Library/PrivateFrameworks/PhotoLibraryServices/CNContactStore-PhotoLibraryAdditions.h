//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContactStore.h>

@interface CNContactStore (PhotoLibraryAdditions)
- (id)contactsMatchingPhoneNumber:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x00900000000036fc
- (id)contactsMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0090000000003599
- (id)_allContactIDsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x00900000000031a9
- (id)allContactIDsMatchingEmailAddress:(id)arg1 orPhoneNumber:(id)arg2;	// IMP=0x0090000000002ea8
- (id)allContactIDsMatchingEmailAddress:(id)arg1;	// IMP=0x0090000000002e94
@end

