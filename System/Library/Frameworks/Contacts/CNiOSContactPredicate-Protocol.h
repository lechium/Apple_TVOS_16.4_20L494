//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSObject-Protocol.h>

@class ABSQLPredicate, CNContactsEnvironment, CNiOSPersonFetchRequest;
@protocol CNEncodedFetchCursor;

@protocol CNiOSContactPredicate <NSObject, NSCopying>
- (ABSQLPredicate *)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(CNiOSPersonFetchRequest *)arg2 error:(id *)arg3;
- (_Bool)cn_supportsEncodedFetching;
- (_Bool)cn_supportsNativeBatchFetch;
- (_Bool)cn_supportsNativeSorting;
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(CNiOSPersonFetchRequest *)arg2 matchInfos:(id *)arg3 environment:(CNContactsEnvironment *)arg4 error:(struct __CFError **)arg5;

@optional
- (id <CNEncodedFetchCursor>)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(CNiOSPersonFetchRequest *)arg2 environment:(CNContactsEnvironment *)arg3 error:(id *)arg4;
@end
