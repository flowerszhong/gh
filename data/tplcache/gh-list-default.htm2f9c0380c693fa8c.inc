<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,393);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",433,491);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",509,541);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("include","",650,685);
$z[6][4]['filename']="head.htm";
$z[7]=Array("field","",817,846);
$z[7][4]['name']="position";
$z[8]=Array("list","\r\n    <li> \r\n     <a href=\"[field:arcurl/]\" class=\"title\">[field:title/]</a>  <b>[field:pubdate function=\"GetDateTimeMK(@me)\"/]</b>\r\n    </li>\r\n    ",923,1108);
$z[8][4]['pagesize']="10";
$z[9]=Array("pagelist","",1209,1287);
$z[9][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[9][4]['listsize']="5";
$z[10]=Array("channel","\r\n      <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\r\n      ",1491,1698);
$z[10][4]['type']="son";
$z[10][4]['currentstyle']="<li><a href='~typelink~' class='thisclass'>~typename~</a></li>";
$z[11]=Array("arclist","\r\n      <li><a href=\"[field:arcurl/]\">[field:title/]</a>\r\n       <p>[field:description function='cn_substr(@me,80)'/]...</p>\r\n      </li>\r\n      ",1906,2107);
$z[11][4]['flag']="c";
$z[11][4]['titlelen']="42";
$z[11][4]['row']="6";
$z[12]=Array("arclist","\r\n      <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n      ",2341,2460);
$z[12][4]['row']="10";
$z[12][4]['orderby']="click";
$z[13]=Array("include","",2541,2578);
$z[13][4]['filename']="footer.htm";

?>