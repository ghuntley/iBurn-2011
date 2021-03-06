//
//  InfoViewController.h
//  iBurn
//
//  Created by Andrew Johnson on 6/26/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface InfoViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
	UITableView *tableView;
	CGSize cellSize;
	UILabel *descriptionLabel;
  NSArray *headerTitles, *cellTexts;
}

- (id)initWithPk:(int)Pk;
- (id)initWithTitle:(NSString*)title;
- (UITableViewCell*)tableView:(UITableView *)tv 
        cellForRowAtIndexPath:(NSIndexPath *)indexPath 
                        texts:(NSArray*)texts;
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *) indexPath object:(id)object;

- (void) showOnMap;
- (void) showCamp;

@end
