/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 18:27:12 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/04 18:27:12 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

/*方針
readで”最後まで”読み込む
→fseekの自作？
open readでreadの戻り値を加算していく。
mallocで１次元配列を作成
\nをsepにしてmallocで動的に２次元配列を作成
tail →　下から１０行。二次元配列の利用
tail -c →　したからｎ文字を表示。一次元配列の使用。
それぞれ表示するプログラムを作成
今回はｃオプションver.のみでOK
*/

int	main(int ac, char **av)
{
	int	fd;
	int	i;

	if (ac < 2 || (!(av[2][0] == '-' && av[2][1] == 'c')) ||  )
	{
		write (2, "error\n", 6);
		return (0);
	}


}
